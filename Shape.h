#pragma once

class Shape {

private:
    int variablePrivada = 5;

protected:
    int lado = 10;

public:
    int variablePublica = 10;
    virtual void draw() {}

};
