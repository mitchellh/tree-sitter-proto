/* This file is meant to provide all the all the fields for the
 * flake.
 */
{ pkgs }: {
  shell = pkgs.mkShell rec {
    name = "tree-sitter-proto";

    buildInputs = with pkgs; [
      nodejs-14_x
      tree-sitter
    ];
  };
}
