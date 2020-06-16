[@bs.val] [@bs.scope ("console")] external log: string => unit = "log";
[@bs.val] [@bs.scope ("console")] external warn: string => unit = "warn";
[@bs.val] [@bs.scope ("console")] external info: string => unit = "info";
[@bs.val] [@bs.scope ("console")] external error: string => unit = "error";
[@bs.val] [@bs.scope ("console")] external clear: unit => unit = "clear";
[@bs.val] [@bs.scope ("console")] external count: unit => unit = "count";
