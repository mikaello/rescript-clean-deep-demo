open BsCleanDeep;

Js.log("Demo of 'bs-clean-deep'!");

let s = [%bs.raw {| { emptystring: '', foo: 3, emptyobject: {} } |}];

Js.log(CleanDeep.cleanDeep(s));
