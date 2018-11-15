[%mui.withStyles
  "ModuleName"((theme: MaterialUi.Theme.t) =>
    {
      some: ReactDOMRe.Style.make(~backgroundColor="red", ()),
      other: ReactDOMRe.Style.make(~backgroundColor="blue", ()),
    }
  )
];