<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * Animal
 */
enum Animal : int {
  DOG = 1;
  CAT = 2;
  TARANTULA = 3;
}
type AnimalType = Animal;

/**
 * Original thrift struct:-
 * Color
 */
class Color implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'red',
      'type' => \TType::DOUBLE,
      ],
    2 => dict[
      'var' => 'green',
      'type' => \TType::DOUBLE,
      ],
    3 => dict[
      'var' => 'blue',
      'type' => \TType::DOUBLE,
      ],
    4 => dict[
      'var' => 'alpha',
      'type' => \TType::DOUBLE,
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'red' => 1,
    'green' => 2,
    'blue' => 3,
    'alpha' => 4,
  };
  const int STRUCTURAL_ID = 5495510740722957663;
  /**
   * Original thrift field:-
   * 1: double red
   */
  public float $red;
  /**
   * Original thrift field:-
   * 2: double green
   */
  public float $green;
  /**
   * Original thrift field:-
   * 3: double blue
   */
  public float $blue;
  /**
   * Original thrift field:-
   * 4: double alpha
   */
  public float $alpha;

  public function __construct(?float $red = null, ?float $green = null, ?float $blue = null, ?float $alpha = null  ) {
    if ($red === null) {
      $this->red = 0.0;
    } else {
      $this->red = $red;
    }
    if ($green === null) {
      $this->green = 0.0;
    } else {
      $this->green = $green;
    }
    if ($blue === null) {
      $this->blue = 0.0;
    } else {
      $this->blue = $blue;
    }
    if ($alpha === null) {
      $this->alpha = 0.0;
    } else {
      $this->alpha = $alpha;
    }
  }

  public function getName(): string {
    return 'Color';
  }

}

/**
 * Original thrift struct:-
 * Vehicle
 */
class Vehicle implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'color',
      'type' => \TType::STRUCT,
      'class' => 'Color',
      ],
    2 => dict[
      'var' => 'licensePlate',
      'type' => \TType::STRING,
      ],
    3 => dict[
      'var' => 'description',
      'type' => \TType::STRING,
      ],
    4 => dict[
      'var' => 'name',
      'type' => \TType::STRING,
      ],
    5 => dict[
      'var' => 'hasAC',
      'type' => \TType::BOOL,
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'color' => 1,
    'licensePlate' => 2,
    'description' => 3,
    'name' => 4,
    'hasAC' => 5,
  };
  const int STRUCTURAL_ID = 2222890000100114781;
  /**
   * Original thrift field:-
   * 1: struct module.Color color
   */
  public ?Color $color;
  /**
   * Original thrift field:-
   * 2: string licensePlate
   */
  public ?string $licensePlate;
  /**
   * Original thrift field:-
   * 3: string description
   */
  public ?string $description;
  /**
   * Original thrift field:-
   * 4: string name
   */
  public ?string $name;
  /**
   * Original thrift field:-
   * 5: bool hasAC
   */
  public bool $hasAC;

  public function __construct(?Color $color = null, ?string $licensePlate = null, ?string $description = null, ?string $name = null, ?bool $hasAC = null  ) {
    $this->color = $color;
    $this->licensePlate = $licensePlate;
    $this->description = $description;
    $this->name = $name;
    if ($hasAC === null) {
      $this->hasAC = false;
    } else {
      $this->hasAC = $hasAC;
    }
  }

  public function getName(): string {
    return 'Vehicle';
  }

}

/**
 * Original thrift struct:-
 * Person
 */
class Person implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'id',
      'type' => \TType::I64,
      ],
    2 => dict[
      'var' => 'name',
      'type' => \TType::STRING,
      ],
    3 => dict[
      'var' => 'age',
      'type' => \TType::I16,
      ],
    4 => dict[
      'var' => 'address',
      'type' => \TType::STRING,
      ],
    5 => dict[
      'var' => 'favoriteColor',
      'type' => \TType::STRUCT,
      'class' => 'Color',
      ],
    6 => dict[
      'var' => 'friends',
      'type' => \TType::SET,
      'etype' => \TType::I64,
      'elem' => dict[
        'type' => \TType::I64,
        ],
        'format' => 'collection',
      ],
    7 => dict[
      'var' => 'bestFriend',
      'type' => \TType::I64,
      ],
    8 => dict[
      'var' => 'petNames',
      'type' => \TType::MAP,
      'ktype' => \TType::I32,
      'vtype' => \TType::STRING,
      'key' => dict[
        'type' => \TType::I32,
        'enum' => 'Animal',
      ],
      'val' => dict[
        'type' => \TType::STRING,
        ],
        'format' => 'collection',
      ],
    9 => dict[
      'var' => 'afraidOfAnimal',
      'type' => \TType::I32,
      'enum' => 'Animal',
      ],
    10 => dict[
      'var' => 'vehicles',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => dict[
        'type' => \TType::STRUCT,
        'class' => 'Vehicle',
        ],
        'format' => 'collection',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'id' => 1,
    'name' => 2,
    'age' => 3,
    'address' => 4,
    'favoriteColor' => 5,
    'friends' => 6,
    'bestFriend' => 7,
    'petNames' => 8,
    'afraidOfAnimal' => 9,
    'vehicles' => 10,
  };
  const int STRUCTURAL_ID = 5615342512964403351;
  /**
   * Original thrift field:-
   * 1: i64 id
   */
  public int $id;
  /**
   * Original thrift field:-
   * 2: string name
   */
  public string $name;
  /**
   * Original thrift field:-
   * 3: i16 age
   */
  public ?int $age;
  /**
   * Original thrift field:-
   * 4: string address
   */
  public ?string $address;
  /**
   * Original thrift field:-
   * 5: struct module.Color favoriteColor
   */
  public ?Color $favoriteColor;
  /**
   * Original thrift field:-
   * 6: set<i64> friends
   */
  public ?Set<int> $friends;
  /**
   * Original thrift field:-
   * 7: i64 bestFriend
   */
  public ?int $bestFriend;
  /**
   * Original thrift field:-
   * 8: map<enum module.Animal, string> petNames
   */
  public ?Map<Animal, string> $petNames;
  /**
   * Original thrift field:-
   * 9: enum module.Animal afraidOfAnimal
   */
  public ?Animal $afraidOfAnimal;
  /**
   * Original thrift field:-
   * 10: list<struct module.Vehicle> vehicles
   */
  public ?Vector<Vehicle> $vehicles;

  public function __construct(?int $id = null, ?string $name = null, ?int $age = null, ?string $address = null, ?Color $favoriteColor = null, ?Set<int> $friends = null, ?int $bestFriend = null, ?Map<Animal, string> $petNames = null, ?Animal $afraidOfAnimal = null, ?Vector<Vehicle> $vehicles = null  ) {
    if ($id === null) {
      $this->id = 0;
    } else {
      $this->id = $id;
    }
    if ($name === null) {
      $this->name = '';
    } else {
      $this->name = $name;
    }
    $this->age = $age;
    $this->address = $address;
    $this->favoriteColor = $favoriteColor;
    $this->friends = $friends;
    $this->bestFriend = $bestFriend;
    $this->petNames = $petNames;
    $this->afraidOfAnimal = $afraidOfAnimal;
    $this->vehicles = $vehicles;
  }

  public function getName(): string {
    return 'Person';
  }

}

