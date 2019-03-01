open BsCleanDeep;

Js.log("Demo of 'bs-clean-deep'\n");

let s = [%bs.raw {| { emptystring: '', foo: 3, emptyobject: {} } |}];

Js.log("No options:");
Js.log(CleanDeep.cleanDeep(s));

Js.log("\nWith options:");
Js.log(CleanDeep.cleanDeepWithOptions(s, ~emptyObjects=false, ()));
