// Generated by BUCKLESCRIPT VERSION 3.1.4, PLEASE EDIT WITH CARE
'use strict';

var Jest = require("@glennsl/bs-jest/src/jest.js");
var R01$Reasonml = require("./R01.bs.js");

describe("Problem 1", (function () {
        Jest.test("Empty list", (function () {
                return Jest.Expect[/* toEqual */12](/* None */0, Jest.Expect[/* expect */0](R01$Reasonml.last(/* [] */0)));
              }));
        return Jest.test("List with elements", (function () {
                      return Jest.Expect[/* toEqual */12](/* Some */["e"], Jest.Expect[/* expect */0](R01$Reasonml.last(/* :: */[
                                          "a",
                                          /* :: */[
                                            "b",
                                            /* :: */[
                                              "c",
                                              /* :: */[
                                                "d",
                                                /* :: */[
                                                  "e",
                                                  /* [] */0
                                                ]
                                              ]
                                            ]
                                          ]
                                        ])));
                    }));
      }));

/*  Not a pure module */