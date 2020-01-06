/*These codes are automatically generated by C2Lua(Jan  6 2020)*/

static int Lua_CFunction(lua_State* L)
{
    /* get 3 param(s) from lua */
    int a = luaL_checkinteger(L, 1);
    float b = luaL_checknumber(L, 2);
    const char* c = luaL_checkstring(L, 3);

    /* call c function */
    char* CFunction_retval = CFunction(a, b, c);

    /* push c function return value to lua */
    lua_pushstring(L, CFunction_retval);
    return 1;
}

static int Lua_millis(lua_State* L)
{
    /* call c function */
    uint32_t millis_retval = millis();

    /* push c function return value to lua */
    lua_pushinteger(L, millis_retval);
    return 1;
}

static int Lua_getsum(lua_State* L)
{
    /* get 2 param(s) from lua */
    float n1 = luaL_checknumber(L, 1);
    float n2 = luaL_checknumber(L, 2);

    /* call c function */
    double getsum_retval = getsum(n1, n2);

    /* push c function return value to lua */
    lua_pushnumber(L, getsum_retval);
    return 1;
}

static int Lua_getStr(lua_State* L)
{
    /* call c function */
    char * getStr_retval = getStr();

    /* push c function return value to lua */
    lua_pushinteger(L, getStr_retval);
    return 1;
}

static int Lua_gpio_set(lua_State* L)
{
    /* get 2 param(s) from lua */
    uint8_t pin = luaL_checkinteger(L, 1);
    bool val = luaL_checkinteger(L, 2);

    /* call c function */
    unsigned long gpio_set_retval = gpio_set(pin, val);

    /* push c function return value to lua */
    lua_pushinteger(L, gpio_set_retval);
    return 1;
}

static int Lua_UserInput(lua_State* L)
{
    /* call c function */
    const char * UserInput_retval = UserInput();

    /* push c function return value to lua */
    lua_pushinteger(L, UserInput_retval);
    return 1;
}

static int Lua_Nop(lua_State* L)
{
    /* call c function */
    Nop();
    return 0;
}

static int Lua_testFunc(lua_State* L)
{
    /* get 3 param(s) from lua */
    float n1 = luaL_checknumber(L, 1);
    int n2 = luaL_checkinteger(L, 2);
    const char* str = luaL_checkstring(L, 3);

    /* call c function */
    double testFunc_retval = *testFunc(&n1, &n2, str);

    /* push c function return value to lua */
    lua_pushnumber(L, testFunc_retval);
    return 1;
}