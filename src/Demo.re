module MyLogger = {
  [@bs.val] external log: string => unit = "console.log";
};

MyLogger.log("Hello World");