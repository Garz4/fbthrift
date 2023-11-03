// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
    "fmt"
    "strings"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = strings.Split
var _ = thrift.ZERO


type Lanyard = string

func NewLanyard() Lanyard {
    return ""
}

func WriteLanyard(item Lanyard, p thrift.Protocol) error {
    if err := p.WriteString(item); err != nil {
    return err
}
    return nil
}

func ReadLanyard(p thrift.Protocol) (Lanyard, error) {
    var decodeResult Lanyard
    decodeErr := func() error {
        result, err := p.ReadString()
if err != nil {
    return err
}
        decodeResult = result
        return nil
    }()
    return decodeResult, decodeErr
}

type Number = int32

func NewNumber() Number {
    return 0
}

func WriteNumber(item Number, p thrift.Protocol) error {
    if err := p.WriteI32(item); err != nil {
    return err
}
    return nil
}

func ReadNumber(p thrift.Protocol) (Number, error) {
    var decodeResult Number
    decodeErr := func() error {
        result, err := p.ReadI32()
if err != nil {
    return err
}
        decodeResult = result
        return nil
    }()
    return decodeResult, decodeErr
}

type B int32

const (
    B_HELLO B = 0
)

// Enum value maps for B
var (
    BToName = map[B]string {
        B_HELLO: "HELLO",
    }

    BToValue = map[string]B {
        "HELLO": B_HELLO,
    }

    BNames = []string{
        "HELLO",
    }

    BValues = []B{
        B_HELLO,
    }
)

func (x B) String() string {
    if v, ok := BToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x B) Ptr() *B {
    return &x
}

// Deprecated: Use BToValue instead (e.g. `x, ok := BToValue["name"]`).
func BFromString(s string) (B, error) {
    if v, ok := BToValue[s]; ok {
        return v, nil
    }
    return B(0), fmt.Errorf("not a valid B string")
}

// Deprecated: Use B.Ptr() instead.
func BPtr(v B) *B {
    return &v
}


type A struct {
    UselessField int32 `thrift:"useless_field,1" json:"useless_field" db:"useless_field"`
}
// Compile time interface enforcer
var _ thrift.Struct = &A{}

func NewA() *A {
    return (&A{}).
        SetUselessFieldNonCompat(0)
}

func (x *A) GetUselessFieldNonCompat() int32 {
    return x.UselessField
}

func (x *A) GetUselessField() int32 {
    return x.UselessField
}

func (x *A) SetUselessFieldNonCompat(value int32) *A {
    x.UselessField = value
    return x
}

func (x *A) SetUselessField(value int32) *A {
    x.UselessField = value
    return x
}

func (x *A) writeField1(p thrift.Protocol) error {  // UselessField
    if err := p.WriteFieldBegin("useless_field", thrift.I32, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetUselessFieldNonCompat()
    if err := p.WriteI32(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *A) readField1(p thrift.Protocol) error {  // UselessField
    result, err := p.ReadI32()
if err != nil {
    return err
}

    x.SetUselessFieldNonCompat(result)
    return nil
}

func (x *A) toString1() string {  // UselessField
    return fmt.Sprintf("%v", x.GetUselessFieldNonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewA().Set<FieldNameFoo>().Set<FieldNameBar>()
type ABuilder struct {
    obj *A
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewA().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewABuilder() *ABuilder {
    return &ABuilder{
        obj: NewA(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewA().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *ABuilder) UselessField(value int32) *ABuilder {
    x.obj.UselessField = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewA().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *ABuilder) Emit() *A {
    var objCopy A = *x.obj
    return &objCopy
}

func (x *A) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("A"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *A) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.I32)):  // useless_field
            if err := x.readField1(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *A) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("A({")
    sb.WriteString(fmt.Sprintf("UselessField:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}

type U struct {
    I *int32 `thrift:"i,1" json:"i,omitempty" db:"i"`
    S *string `thrift:"s,2" json:"s,omitempty" db:"s"`
}
// Compile time interface enforcer
var _ thrift.Struct = &U{}

func NewU() *U {
    return (&U{})
}

func (x *U) GetINonCompat() *int32 {
    return x.I
}

func (x *U) GetI() int32 {
    if !x.IsSetI() {
        return 0
    }

    return *x.I
}

func (x *U) GetSNonCompat() *string {
    return x.S
}

func (x *U) GetS() string {
    if !x.IsSetS() {
        return ""
    }

    return *x.S
}

func (x *U) SetINonCompat(value int32) *U {
    x.I = &value
    return x
}

func (x *U) SetI(value *int32) *U {
    x.I = value
    return x
}

func (x *U) SetSNonCompat(value string) *U {
    x.S = &value
    return x
}

func (x *U) SetS(value *string) *U {
    x.S = value
    return x
}

func (x *U) IsSetI() bool {
    return x != nil && x.I != nil
}

func (x *U) IsSetS() bool {
    return x != nil && x.S != nil
}

func (x *U) writeField1(p thrift.Protocol) error {  // I
    if !x.IsSetI() {
        return nil
    }

    if err := p.WriteFieldBegin("i", thrift.I32, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.GetINonCompat()
    if err := p.WriteI32(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *U) writeField2(p thrift.Protocol) error {  // S
    if !x.IsSetS() {
        return nil
    }

    if err := p.WriteFieldBegin("s", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.GetSNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *U) readField1(p thrift.Protocol) error {  // I
    result, err := p.ReadI32()
if err != nil {
    return err
}

    x.SetINonCompat(result)
    return nil
}

func (x *U) readField2(p thrift.Protocol) error {  // S
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetSNonCompat(result)
    return nil
}

func (x *U) toString1() string {  // I
    if x.IsSetI() {
        return fmt.Sprintf("%v", *x.GetINonCompat())
    }
    return fmt.Sprintf("%v", x.GetINonCompat())
}

func (x *U) toString2() string {  // S
    if x.IsSetS() {
        return fmt.Sprintf("%v", *x.GetSNonCompat())
    }
    return fmt.Sprintf("%v", x.GetSNonCompat())
}



func (x *U) countSetFields() int {
    count := int(0)
    if (x.IsSetI()) {
        count++
    }
    if (x.IsSetS()) {
        count++
    }
    return count
}

func (x *U) CountSetFieldsU() int {
    return x.countSetFields()
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewU().Set<FieldNameFoo>().Set<FieldNameBar>()
type UBuilder struct {
    obj *U
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewU().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewUBuilder() *UBuilder {
    return &UBuilder{
        obj: NewU(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewU().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *UBuilder) I(value *int32) *UBuilder {
    x.obj.I = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewU().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *UBuilder) S(value *string) *UBuilder {
    x.obj.S = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewU().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *UBuilder) Emit() *U {
    var objCopy U = *x.obj
    return &objCopy
}

func (x *U) Write(p thrift.Protocol) error {
    if countSet := x.countSetFields(); countSet > 1 {
        return fmt.Errorf("%T write union: no more than one field must be set (%d set).", x, countSet)
    }
    if err := p.WriteStructBegin("U"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *U) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.I32)):  // i
            if err := x.readField1(p); err != nil {
                return err
            }
        case (id == 2 && wireType == thrift.Type(thrift.STRING)):  // s
            if err := x.readField2(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *U) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("U({")
    sb.WriteString(fmt.Sprintf("I:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("S:%s", x.toString2()))
    sb.WriteString("})")

    return sb.String()
}

type Bang struct {
    Message string `thrift:"message,1" json:"message" db:"message"`
}
// Compile time interface enforcer
var _ thrift.Struct = &Bang{}

func NewBang() *Bang {
    return (&Bang{}).
        SetMessageNonCompat("")
}

func (x *Bang) GetMessageNonCompat() string {
    return x.Message
}

func (x *Bang) GetMessage() string {
    return x.Message
}

func (x *Bang) SetMessageNonCompat(value string) *Bang {
    x.Message = value
    return x
}

func (x *Bang) SetMessage(value string) *Bang {
    x.Message = value
    return x
}

func (x *Bang) writeField1(p thrift.Protocol) error {  // Message
    if err := p.WriteFieldBegin("message", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMessageNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Bang) readField1(p thrift.Protocol) error {  // Message
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetMessageNonCompat(result)
    return nil
}

func (x *Bang) toString1() string {  // Message
    return fmt.Sprintf("%v", x.GetMessageNonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewBang().Set<FieldNameFoo>().Set<FieldNameBar>()
type BangBuilder struct {
    obj *Bang
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewBang().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewBangBuilder() *BangBuilder {
    return &BangBuilder{
        obj: NewBang(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewBang().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *BangBuilder) Message(value string) *BangBuilder {
    x.obj.Message = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewBang().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *BangBuilder) Emit() *Bang {
    var objCopy Bang = *x.obj
    return &objCopy
}

func (x *Bang) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Bang"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Bang) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // message
            if err := x.readField1(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Bang) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Bang({")
    sb.WriteString(fmt.Sprintf("Message:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}
func (x *Bang) Error() string {
    return x.String()
}

// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
	  RegisterType(name string, initializer func() any)
}) {

}
