type crs = {alignCenter: string};

module CrsTest: Test.WithStylesSafeTemplate with type classRecordStrings = crs = {
  type classRecord = {alignCenter: ReactDOMRe.Style.t};
  type classRecordJs = {. "alignCenter": ReactDOMRe.Style.t};
  let classes =
    Test.Record({
      alignCenter:
        ReactDOMRe.Style.make(~width="100%", ~textAlign="center", ()),
    });
  type classRecordStrings = crs;
  type classRecordStringsJs = {. "alignCenter": string};
  let classRecordStringsFromJs = crJs: classRecordStrings => {
    alignCenter: crJs##alignCenter,
  };
  let classRecordToJs = cr => {"alignCenter": cr.alignCenter};
};

module ST = Test.WithStylesSafe(CrsTest);