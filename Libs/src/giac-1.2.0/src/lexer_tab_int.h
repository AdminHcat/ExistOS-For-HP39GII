      {"BEGIN",0,0,0,T_BLOC_BEGIN},
      {"Binary"         ,1,_BINARY_OPERATOR , _INT_MUPADOPERATOR ,T_NUMBER},
      {"CATCH",0,0,0,T_CATCH},
      {"CONTINUE",0,0,0,T_CONTINUE},
      {"DEFAULT",1,0,0,T_DEFAULT},
      {"DOM_COMPLEX"               ,0, _CPLX, _INT_TYPE, T_TYPE_ID},
      {"DOM_FLOAT"                ,0, _DOUBLE_, _INT_TYPE, T_TYPE_ID},
      {"DOM_FUNC"                ,0, _FUNC, _INT_TYPE, T_TYPE_ID},
      {"DOM_IDENT"            ,0, _IDNT, _INT_TYPE, T_TYPE_ID},
      {"DOM_INT"               ,0, _ZINT, _INT_TYPE, T_TYPE_ID},
      {"DOM_LIST"              ,0, _VECT, _INT_TYPE, T_TYPE_ID},
      {"DOM_LONGFLOAT"                ,0, _REAL, _INT_TYPE, T_TYPE_ID},
      {"DOM_MATRIX"              ,0, _VECT, _INT_TYPE, T_TYPE_ID},
      {"DOM_RAT"              ,0, _FRAC, _INT_TYPE, T_TYPE_ID},
      {"DOM_SPECIALFLOAT"                  ,0,  _FLOAT_, _INT_TYPE, T_TYPE_ID},
      {"DOM_STRING"                ,0, _STRNG, _INT_TYPE, T_TYPE_ID},
      {"DOM_SYMBOLIC"              ,0, _SYMB, _INT_TYPE, T_TYPE_ID},
      {"DOM_int"                  ,0,  _INT_, _INT_TYPE, T_TYPE_ID},
      {"DOWNTO",0,-1,0,T_TO},
      {"Define",0,0,0,TI_DEFINE},
      {"Delete"         ,1,_DELETE_OPERATOR , _INT_MUPADOPERATOR ,T_NUMBER},
      {"ELIF",0,0,0,T_ELIF},
      {"ELSE",0,0,0,T_ELSE},
      {"END",0,0,0,T_BLOC_END},
      {"Else",0,0,0,T_ELSE},
      {"ElseIf",0,0,0,T_ELIF},
      {"Elseif",0,0,0,T_ELIF},
      {"EndDlog",0,1,0,T_BLOC_END},
      {"EndFor",0,2,0,T_BLOC_END},
      {"EndFunc",0,3,0,T_BLOC_END},
      {"EndIf",0,4,0,T_BLOC_END},
      {"EndLoop",0,2,0,T_BLOC_END},
      {"EndPrgm",0,3,0,T_BLOC_END},
      {"EndTry",0,7,0,T_BLOC_END},
      {"EndWhile",0,8,0,T_BLOC_END},
      {"Endfor",0,2,0,T_BLOC_END},
      {"Endfunc",0,3,0,T_BLOC_END},
      {"Endif",0,4,0,T_BLOC_END},
      {"Endloop",0,2,0,T_BLOC_END},
      {"Endprgm",0,3,0,T_BLOC_END},
      {"Endtry",0,7,0,T_BLOC_END},
      {"Endwhile",0,8,0,T_BLOC_END},
      {"FALSE",1,0,_INT_BOOLEAN,T_NUMBER},
      {"FAUX",1,0,_INT_BOOLEAN,T_NUMBER},
      {"FROM",0,0,0,T_FROM},
      {"Func",0,0,0,TI_PRGM},
      {"GLOBAL",0,1,0,T_LOCAL},
      {"IFERR",0,0,0,T_IFERR},
      {"LOCAL",0,0,0,T_LOCAL},
      {"Local",0,0,0,TI_LOCAL},
      {"NEXT",0,0,0,T_CONTINUE},
      {"NULL",1,0,0,T_NULL},
      {"Nary"         ,1,_NARY_OPERATOR , _INT_MUPADOPERATOR ,T_NUMBER},
      {"Postfix"         ,1,_POSTFIX_OPERATOR , _INT_MUPADOPERATOR ,T_NUMBER},
      {"Prefix"         ,1,_PREFIX_OPERATOR , _INT_MUPADOPERATOR ,T_NUMBER},
      {"Prgm",0,0,0,TI_PRGM},
      {"START",0,0,0,T_START},
      {"STEP",0,0,0,T_BY},
      {"SWITCH",0,0,0,T_SWITCH},
      {"THEN",0,0,0,T_THEN},
      {"TO",0,1,0,T_TO},
      {"TRUE",1,1,_INT_BOOLEAN,T_NUMBER},
      {"TRY",0,0,0,T_TRY},
      {"Then",0,0,0,T_THEN},
      {"Try",0,0,0,TI_TRY},
      {"UNTIL",0,0,0,T_UNTIL},
      {"VRAI",1,1,_INT_BOOLEAN,T_NUMBER},
      {"adaptive"         ,1,_ADAPTIVE , _INT_PLOT ,T_NUMBER},
      {"algebraic"              ,0, _SYMB, _INT_TYPE, T_TYPE_ID},
      {"args",1,0,0,T_ARGS},
      {"axes"         ,1,_AXES , _INT_PLOT ,T_NUMBER},
      {"axesfont"         ,1,_AXESFONT , _INT_PLOT ,T_NUMBER},
      {"bareiss"         ,1, _BAREISS, _INT_SOLVER,T_NUMBER},
      {"base"         ,1,_BASE , _INT_MAPLECONVERSION ,T_NUMBER},
      {"begin",0,0,0,T_BLOC_BEGIN},
      {"bisection_solver"         ,1, _BISECTION_SOLVER, _INT_SOLVER,T_NUMBER},
      {"brent_solver"         ,1, _BRENT_SOLVER, _INT_SOLVER,T_NUMBER},
      {"by",1,0,0,T_BY},
      {"cap_flat_line"         ,1, _CAP_FLAT_LINE, _INT_COLOR ,T_NUMBER},
      {"cap_round_line"         ,1, _CAP_ROUND_LINE, _INT_COLOR ,T_NUMBER},
      {"cap_square_line"         ,1, _CAP_SQUARE_LINE, _INT_COLOR ,T_NUMBER},
      {"case",0,0,0,T_CASE},
      {"catch",0,0,0,T_CATCH},
      {"complex"               ,0, _CPLX, _INT_TYPE, T_TYPE_ID},
      {"confrac"         ,1,_CONFRAC , _INT_MAPLECONVERSION ,T_NUMBER},
      {"continue",0,0,0,T_CONTINUE},
      {"coords"         ,1, _COORDS, _INT_PLOT ,T_NUMBER},
      {"cross_point"         ,1, 0  , _INT_COLOR ,T_NUMBER},
      {"dash_line"         ,1, _DASH_LINE, _INT_COLOR ,T_NUMBER},
      {"dashdot_line"         ,1, _DASHDOT_LINE, _INT_COLOR ,T_NUMBER},
      {"dashdotdot_line"         ,1, _DASHDOTDOT_LINE, _INT_COLOR ,T_NUMBER},
      {"default",1,0,0,T_DEFAULT},
      {"dnewton_solver"         ,1, _DNEWTON_SOLVER, _INT_SOLVER,T_NUMBER},
      {"dot_line"         ,1, _DOT_LINE, _INT_COLOR ,T_NUMBER},
      {"downto",0,-1,0,T_TO},
      {"elif",0,0,0,T_ELIF},
      {"else",0,0,0,T_ELSE},
      {"end",0,0,0,T_BLOC_END},
      {"end_case",0,0,0,T_ENDCASE},
      {"end_do",0,2,0,T_BLOC_END},
      {"end_for",0,2,0,T_BLOC_END},
      {"end_if",0,4,0,T_BLOC_END},
      {"end_proc",0,3,0,T_BLOC_END},
      {"end_while",0,2,0,T_BLOC_END},
      {"endfunc",0,3,0,T_BLOC_END},
      {"epaisseur"         ,1, _THICKNESS, _INT_PLOT ,T_NUMBER},
      {"epaisseur_ligne_1"         ,1, 0 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_ligne_2"         ,1, _LINE_WIDTH_2 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_ligne_3"         ,1, _LINE_WIDTH_3 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_ligne_4"         ,1, _LINE_WIDTH_4 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_ligne_5"         ,1, _LINE_WIDTH_5 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_ligne_6"         ,1, _LINE_WIDTH_6 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_ligne_7"         ,1, _LINE_WIDTH_7 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_ligne_8"         ,1, _LINE_WIDTH_8 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_point_1"         ,1, 0 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_point_2"         ,1, _POINT_WIDTH_2 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_point_3"         ,1, _POINT_WIDTH_3 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_point_4"         ,1, _POINT_WIDTH_4 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_point_5"         ,1, _POINT_WIDTH_5 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_point_6"         ,1, _POINT_WIDTH_6 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_point_7"         ,1, _POINT_WIDTH_7 , _INT_COLOR ,T_NUMBER},
      {"epaisseur_point_8"         ,1, _POINT_WIDTH_8 , _INT_COLOR ,T_NUMBER},
      {"esac",0,0,0,T_ENDCASE},
      {"expln"         ,1,_EXPLN , _INT_MAPLECONVERSION ,T_NUMBER},
      {"faddeev"         ,1, _FADEEV, _INT_SOLVER,T_NUMBER},
      {"fadeev"         ,1, _FADEEV, _INT_SOLVER,T_NUMBER},
      {"false",1,0,_INT_BOOLEAN,T_NUMBER},
      {"falsepos_solver"         ,1, _FALSEPOS_SOLVER, _INT_SOLVER,T_NUMBER},
      {"faux",1,0,_INT_BOOLEAN,T_NUMBER},
      {"ffaire",0,2,0,T_BLOC_END},
      {"ffonction",0,3,0,T_BLOC_END},
      {"fi",0,4,0,T_BLOC_END},
      {"filled"         ,1, _FILL_POLYGON, _INT_COLOR ,T_NUMBER},
      {"float"                ,0, _DOUBLE_, _INT_TYPE, T_TYPE_ID},
      {"font"         ,1,_FONT , _INT_PLOT ,T_NUMBER},
      {"fpour",0,2,0,T_BLOC_END},
      {"frames"         ,1,_FRAMES , _INT_PLOT ,T_NUMBER},
      {"from",0,0,0,T_FROM},
      {"fsi",0,4,0,T_BLOC_END},
      {"ftantque",0,8,0,T_BLOC_END},
      {"fullparfrac"         ,1,_FULLPARFRAC , _INT_MAPLECONVERSION ,T_NUMBER},
      {"func",0,0,0,TI_PRGM},
      {"gauss15"         ,1, _GAUSS15, _INT_SOLVER,T_NUMBER},
      {"gl_ambient"       ,1,_GL_AMBIENT , _INT_PLOT ,T_NUMBER},
      {"gl_ambient_and_diffuse"       ,1,_GL_AMBIENT_AND_DIFFUSE , _INT_PLOT ,T_NUMBER},
      {"gl_animate"       ,1,_GL_ANIMATE , _INT_PLOT ,T_NUMBER},
      {"gl_back"       ,1,_GL_BACK , _INT_PLOT ,T_NUMBER},
      {"gl_blend"       ,1,_GL_BLEND , _INT_PLOT ,T_NUMBER},
      {"gl_color_indexes"       ,1,_GL_COLOR_INDEXES , _INT_PLOT ,T_NUMBER},
      {"gl_constant_attenuation"       ,1,_GL_CONSTANT_ATTENUATION , _INT_PLOT ,T_NUMBER},
      {"gl_diffuse"       ,1,_GL_DIFFUSE , _INT_PLOT ,T_NUMBER},
      {"gl_emission"       ,1,_GL_EMISSION , _INT_PLOT ,T_NUMBER},
      {"gl_flat"       ,1,_GL_FLAT , _INT_PLOT ,T_NUMBER},
      {"gl_front"       ,1,_GL_FRONT , _INT_PLOT ,T_NUMBER},
      {"gl_front_and_back"       ,1,_GL_FRONT_AND_BACK , _INT_PLOT ,T_NUMBER},
      {"gl_light"       ,1,_GL_LIGHT , _INT_PLOT ,T_NUMBER},
      {"gl_light0"         ,1,_GL_LIGHT0 , _INT_PLOT ,T_NUMBER},
      {"gl_light1"         ,1,_GL_LIGHT1 , _INT_PLOT ,T_NUMBER},
      {"gl_light2"         ,1,_GL_LIGHT2 , _INT_PLOT ,T_NUMBER},
      {"gl_light3"         ,1,_GL_LIGHT3 , _INT_PLOT ,T_NUMBER},
      {"gl_light4"         ,1,_GL_LIGHT4 , _INT_PLOT ,T_NUMBER},
      {"gl_light5"         ,1,_GL_LIGHT5 , _INT_PLOT ,T_NUMBER},
      {"gl_light6"         ,1,_GL_LIGHT6 , _INT_PLOT ,T_NUMBER},
      {"gl_light7"         ,1,_GL_LIGHT7 , _INT_PLOT ,T_NUMBER},
      {"gl_light_model_ambient"       ,1,_GL_LIGHT_MODEL_AMBIENT , _INT_PLOT ,T_NUMBER},
      {"gl_light_model_color_control"       ,1,_GL_LIGHT_MODEL_COLOR_CONTROL , _INT_PLOT ,T_NUMBER},
      {"gl_light_model_local_viewer"       ,1,_GL_LIGHT_MODEL_LOCAL_VIEWER , _INT_PLOT ,T_NUMBER},
      {"gl_light_model_two_side"       ,1,_GL_LIGHT_MODEL_TWO_SIDE , _INT_PLOT ,T_NUMBER},
      {"gl_linear_attenuation"       ,1,_GL_LINEAR_ATTENUATION , _INT_PLOT ,T_NUMBER},
      {"gl_logx"       ,1,_GL_LOGX , _INT_PLOT ,T_NUMBER},
      {"gl_logy"       ,1,_GL_LOGY , _INT_PLOT ,T_NUMBER},
      {"gl_logz"       ,1,_GL_LOGZ , _INT_PLOT ,T_NUMBER},
      {"gl_material"       ,1,_GL_MATERIAL , _INT_PLOT ,T_NUMBER},
      {"gl_one_minus_src_alpha"       ,1,_GL_ONE_MINUS_SRC_ALPHA , _INT_PLOT ,T_NUMBER},
      {"gl_option"       ,1,_GL_OPTION , _INT_PLOT ,T_NUMBER},
      {"gl_ortho"       ,1,_GL_ORTHO , _INT_PLOT ,T_NUMBER},
      {"gl_perspective"       ,1,_GL_PERSPECTIVE , _INT_PLOT ,T_NUMBER},
      {"gl_position"       ,1,_GL_POSITION , _INT_PLOT ,T_NUMBER},
      {"gl_quadratic_attenuation"       ,1,_GL_QUADRATIC_ATTENUATION , _INT_PLOT ,T_NUMBER},
      {"gl_quaternion"       ,1,_GL_QUATERNION , _INT_PLOT ,T_NUMBER},
      {"gl_rotation_axis"       ,1,_GL_ROTATION_AXIS , _INT_PLOT ,T_NUMBER},
      {"gl_separate_specular_color"       ,1,_GL_SEPARATE_SPECULAR_COLOR , _INT_PLOT ,T_NUMBER},
      {"gl_shininess"       ,1,_GL_SHININESS , _INT_PLOT ,T_NUMBER},
      {"gl_showaxes"       ,1,_GL_SHOWAXES , _INT_PLOT ,T_NUMBER},
      {"gl_shownames"       ,1,_GL_SHOWNAMES , _INT_PLOT ,T_NUMBER},
      {"gl_single_color"       ,1,_GL_SINGLE_COLOR , _INT_PLOT ,T_NUMBER},
      {"gl_smooth"       ,1,_GL_SMOOTH , _INT_PLOT ,T_NUMBER},
      {"gl_specular"       ,1,_GL_SPECULAR , _INT_PLOT ,T_NUMBER},
      {"gl_spot_cutoff"       ,1,_GL_SPOT_CUTOFF , _INT_PLOT ,T_NUMBER},
      {"gl_spot_direction"       ,1,_GL_SPOT_DIRECTION , _INT_PLOT ,T_NUMBER},
      {"gl_spot_exponent"       ,1,_GL_SPOT_EXPONENT , _INT_PLOT ,T_NUMBER},
      {"gl_src_alpha"       ,1,_GL_SRC_ALPHA , _INT_PLOT ,T_NUMBER},
      {"gl_texture"         ,1,_GL_TEXTURE , _INT_PLOT ,T_NUMBER},
      {"gl_x"       ,1,_GL_X , _INT_PLOT ,T_NUMBER},
      {"gl_x_axis_color"       ,1,_GL_X_AXIS_COLOR , _INT_PLOT ,T_NUMBER}, 
      {"gl_x_axis_name"       ,1,_GL_X_AXIS_NAME , _INT_PLOT ,T_NUMBER}, 
      {"gl_x_axis_unit"       ,1,_GL_X_AXIS_UNIT , _INT_PLOT ,T_NUMBER}, 
      {"gl_xtick"       ,1,_GL_XTICK , _INT_PLOT ,T_NUMBER},
      {"gl_y"       ,1,_GL_Y , _INT_PLOT ,T_NUMBER},
      {"gl_y_axis_color"       ,1,_GL_Y_AXIS_COLOR , _INT_PLOT ,T_NUMBER}, 
      {"gl_y_axis_name"       ,1,_GL_Y_AXIS_NAME , _INT_PLOT ,T_NUMBER}, 
      {"gl_y_axis_unit"       ,1,_GL_Y_AXIS_UNIT , _INT_PLOT ,T_NUMBER}, 
      {"gl_ytick"       ,1,_GL_YTICK , _INT_PLOT ,T_NUMBER},
      {"gl_z"       ,1,_GL_Z , _INT_PLOT ,T_NUMBER},
      {"gl_z_axis_color"       ,1,_GL_Z_AXIS_COLOR , _INT_PLOT ,T_NUMBER}, 
      {"gl_z_axis_name"       ,1,_GL_Z_AXIS_NAME , _INT_PLOT ,T_NUMBER}, 
      {"gl_z_axis_unit"       ,1,_GL_Z_AXIS_UNIT , _INT_PLOT ,T_NUMBER}, 
      {"gl_ztick"       ,1,_GL_ZTICK , _INT_PLOT ,T_NUMBER},
      {"global",0,1,0,T_LOCAL},
      {"golub_reinsch_decomp"         ,1, _GOLUB_REINSCH_DECOMP, _INT_SOLVER,T_NUMBER},
      {"golub_reinsch_mod_decomp"         ,1, _GOLUB_REINSCH_MOD_DECOMP, _INT_SOLVER,T_NUMBER},
      {"gomme"         ,1, _WHITE, /* was 49 */ _INT_COLOR ,T_NUMBER},
      {"groebner",1,_GROEBNER,_INT_MAPLELIB,T_MAPLELIB},
      {"hybrid_solver"         ,1, _HYBRID_SOLVER, _INT_SOLVER,T_NUMBER},
      {"hybridj_solver"         ,1, _HYBRIDJ_SOLVER, _INT_SOLVER,T_NUMBER},
      {"hybrids_solver"         ,1, _HYBRIDS_SOLVER, _INT_SOLVER,T_NUMBER},
      {"hybridsj_solver"         ,1, _HYBRIDSJ_SOLVER, _INT_SOLVER,T_NUMBER},
      {"in",0,0,0,T_IN},
      {"integer"               ,0, _ZINT, _INT_TYPE, T_TYPE_ID},
      {"intersect",0,0,0,T_INTERSECT},
      {"invisible_point"         ,1, _POINT_INVISIBLE , _INT_COLOR ,T_NUMBER},
      {"jacobi_decomp"         ,1, _JACOBI_DECOMP, _INT_SOLVER,T_NUMBER},
      {"jusqu_a",0,0,0,T_UNTIL},
      {"jusqua",0,0,0,T_UNTIL},
      {"keep_pivot"         ,1, _KEEP_PIVOT, _INT_SOLVER,T_NUMBER},
      {"labeldirections"         ,1, _LABELDIRECTIONS, _INT_PLOT ,T_NUMBER},
      {"labelfont"         ,1, _LABELFONT, _INT_PLOT ,T_NUMBER},
      {"labels"         ,1, _LABELS, _INT_PLOT ,T_NUMBER},
      {"left_rectangle"         ,1, _RECTANGLE_GAUCHE, _INT_SOLVER,T_NUMBER},
      {"ligne_chapeau_carre"         ,1, _CAP_SQUARE_LINE, _INT_COLOR ,T_NUMBER},
      {"ligne_chapeau_plat"         ,1, _CAP_FLAT_LINE, _INT_COLOR ,T_NUMBER},
      {"ligne_chapeau_rond"         ,1, _CAP_ROUND_LINE, _INT_COLOR ,T_NUMBER},
      {"ligne_point"         ,1, _DOT_LINE, _INT_COLOR ,T_NUMBER},
      {"ligne_tiret"         ,1, _DASH_LINE, _INT_COLOR ,T_NUMBER},
      {"ligne_tiret_point"         ,1, _DASHDOT_LINE, _INT_COLOR ,T_NUMBER},
      {"ligne_tiret_pointpoint"         ,1, _DASHDOTDOT_LINE, _INT_COLOR ,T_NUMBER},
      {"ligne_trait_plein"         ,1, 0, _INT_COLOR ,T_NUMBER},
      {"linalg",1,_LINALG,_INT_MAPLELIB,T_MAPLELIB},
      {"line_width_1"         ,1, 0 , _INT_COLOR ,T_NUMBER},
      {"line_width_2"         ,1, _LINE_WIDTH_2 , _INT_COLOR ,T_NUMBER},
      {"line_width_3"         ,1, _LINE_WIDTH_3 , _INT_COLOR ,T_NUMBER},
      {"line_width_4"         ,1, _LINE_WIDTH_4 , _INT_COLOR ,T_NUMBER},
      {"line_width_5"         ,1, _LINE_WIDTH_5 , _INT_COLOR ,T_NUMBER},
      {"line_width_6"         ,1, _LINE_WIDTH_6 , _INT_COLOR ,T_NUMBER},
      {"line_width_7"         ,1, _LINE_WIDTH_7 , _INT_COLOR ,T_NUMBER},
      {"line_width_8"         ,1, _LINE_WIDTH_8 , _INT_COLOR ,T_NUMBER},
      {"linestyle"         ,1, _LINESTYLE, _INT_PLOT ,T_NUMBER},
      {"local",0,0,0,T_LOCAL},
      {"localbloc",0,0,0,T_LOCALBLOC},
      {"middle_point"         ,1, _POINT_MILIEU, _INT_SOLVER,T_NUMBER},
      {"minor_det"         ,1, _MINOR_DET, _INT_SOLVER,T_NUMBER},
      {"minus",0,0,0,T_MINUS},
      {"modular_check"         ,1,_MODULAR_CHECK , _INT_GROEBNER ,T_NUMBER},
      {"negint"               ,0, _NEGINT, _INT_MAPLECONVERSION, T_TYPE_ID},
      {"newton_solver"         ,1, _NEWTON_SOLVER, _INT_SOLVER,T_NUMBER},
      {"newtonj_solver"         ,1, _NEWTONJ_SOLVER, _INT_SOLVER,T_NUMBER},
      {"next",0,0,0,T_CONTINUE},
      {"nonnegint"               ,0, _NONNEGINT, _INT_MAPLECONVERSION, T_TYPE_ID},
      {"nonposint"               ,0, _NONPOSINT, _INT_MAPLECONVERSION, T_TYPE_ID},
      {"nstep"         ,1, _NSTEP , _INT_PLOT ,T_NUMBER},
      {"numpoints"         ,1, _NUMPOINTS, _INT_PLOT ,T_NUMBER},
      {"numtheory",1,_NUMTHEORY,_INT_MAPLELIB,T_MAPLELIB},
      {"od",0,9,0,T_BLOC_END},
      {"of",0,0,0,T_OF},
      {"otherwise",0,0,0,T_DEFAULT},
      {"parfrac"         ,1,_PARFRAC , _INT_MAPLECONVERSION ,T_NUMBER},
      {"plex"         ,1,_PLEX_ORDER , _INT_GROEBNER ,T_NUMBER},
      {"plus_point"         ,1, _POINT_PLUS , _INT_COLOR ,T_NUMBER},
      {"point_carre"         ,1, _POINT_CARRE  , _INT_COLOR ,T_NUMBER},
      {"point_croix"         ,1, 0  , _INT_COLOR ,T_NUMBER},
      {"point_etoile"         ,1, _POINT_ETOILE , _INT_COLOR ,T_NUMBER},
      {"point_invisible"         ,1, _POINT_INVISIBLE , _INT_COLOR ,T_NUMBER},
      {"point_losange"         ,1, _POINT_LOSANGE , _INT_COLOR ,T_NUMBER},
      {"point_milieu"         ,1, _POINT_MILIEU, _INT_SOLVER,T_NUMBER},
      {"point_plus"         ,1, _POINT_PLUS , _INT_COLOR ,T_NUMBER},
      {"point_point"         ,1, _POINT_POINT , _INT_COLOR ,T_NUMBER},
      {"point_triangle"         ,1, _POINT_TRIANGLE , _INT_COLOR ,T_NUMBER},
      {"point_width_1"         ,1, 0 , _INT_COLOR ,T_NUMBER},
      {"point_width_2"         ,1, _POINT_WIDTH_2 , _INT_COLOR ,T_NUMBER},
      {"point_width_3"         ,1, _POINT_WIDTH_3 , _INT_COLOR ,T_NUMBER},
      {"point_width_4"         ,1, _POINT_WIDTH_4 , _INT_COLOR ,T_NUMBER},
      {"point_width_5"         ,1, _POINT_WIDTH_5 , _INT_COLOR ,T_NUMBER},
      {"point_width_6"         ,1, _POINT_WIDTH_6 , _INT_COLOR ,T_NUMBER},
      {"point_width_7"         ,1, _POINT_WIDTH_7 , _INT_COLOR ,T_NUMBER},
      {"point_width_8"         ,1, _POINT_WIDTH_8 , _INT_COLOR ,T_NUMBER},
      {"polynom"         ,0,_POLY1__VECT , _INT_MAPLECONVERSION ,T_TYPE_ID},
      {"posint"               ,0, _POSINT, _INT_MAPLECONVERSION, T_TYPE_ID},
      {"proc",0,0,0,T_PROC},
      {"program",0,0,0,T_PROGRAM},
      {"quadrant1"         ,1, _QUADRANT1 , _INT_COLOR ,T_NUMBER},
      {"quadrant2"         ,1, _QUADRANT2 , _INT_COLOR ,T_NUMBER},
      {"quadrant3"         ,1, _QUADRANT3 , _INT_COLOR ,T_NUMBER},
      {"quadrant4"         ,1, _QUADRANT4 , _INT_COLOR ,T_NUMBER},
      {"rational"              ,0, _FRAC, _INT_TYPE, T_TYPE_ID},
      {"rational_det"         ,1, _RATIONAL_DET, _INT_SOLVER,T_NUMBER},
      {"rectangle_droit"         ,1, _RECTANGLE_DROIT, _INT_SOLVER,T_NUMBER},
      {"rectangle_gauche"         ,1, _RECTANGLE_GAUCHE, _INT_SOLVER,T_NUMBER},
      {"rempli"         ,1, _FILL_POLYGON , _INT_COLOR ,T_NUMBER},
      {"resolution"         ,1,_RESOLUTION , _INT_PLOT ,T_NUMBER},
      {"revlex"         ,1,_REVLEX_ORDER , _INT_GROEBNER ,T_NUMBER},
      {"rhombus_point"         ,1, _POINT_LOSANGE , _INT_COLOR ,T_NUMBER},
      {"right_rectangle"         ,1, _RECTANGLE_DROIT, _INT_SOLVER,T_NUMBER},
      {"rombergm"         ,1, _ROMBERGM, _INT_SOLVER,T_NUMBER},
      {"rombergt"         ,1, _ROMBERGT, _INT_SOLVER,T_NUMBER},
      {"rur"         ,1,_RUR_REVLEX , _INT_GROEBNER ,T_NUMBER},
      {"sample"         ,1, _SAMPLE, _INT_PLOT ,T_NUMBER},
      {"sans_factoriser"         ,1, _UNFACTORED, _INT_SOLVER,T_NUMBER},
      {"scaling"         ,1, _SCALING, _INT_PLOT ,T_NUMBER},
      {"secant_solver"         ,1, _SECANT_SOLVER, _INT_SOLVER,T_NUMBER},
      {"set"         ,0,_SET__VECT , _INT_MAPLECONVERSION ,T_TYPE_ID},
      {"simpson"         ,1, _SIMPSON, _INT_SOLVER,T_NUMBER},
      {"solid_line"         ,1, 0, _INT_COLOR ,T_NUMBER},
      {"square_point"         ,1, _POINT_CARRE  , _INT_COLOR ,T_NUMBER},
      {"stack",0,0,0,T_STACK},
      {"star_point"         ,1, _POINT_ETOILE , _INT_COLOR ,T_NUMBER},
      {"steffenson_solver"         ,1, _STEFFENSON_SOLVER, _INT_SOLVER,T_NUMBER},
      {"step",0,0,0,T_BY},
      {"style"         ,1, _STYLE, _INT_PLOT ,T_NUMBER},
      {"switch",0,0,0,T_SWITCH},
      {"symbol"         ,0, _SYMBOL, _INT_PLOT ,T_TYPE_ID},
      {"symbolsize"         ,1,_SYMBOLSIZE , _INT_PLOT ,T_NUMBER},
      {"tdeg"         ,1,_TDEG_ORDER , _INT_GROEBNER ,T_NUMBER},
      {"then",0,0,0,T_THEN},
      {"thickness"         ,1, _THICKNESS, _INT_PLOT ,T_NUMBER},
      {"tickmarks"         ,1,_TICKMARKS , _INT_PLOT ,T_NUMBER},
      {"title"         ,1, _TITLE, _INT_PLOT ,T_NUMBER},
      {"titlefont"         ,1, _TITLEFONT, _INT_PLOT ,T_NUMBER},
      {"titre"         ,1, _TITLE, _INT_PLOT ,T_NUMBER},
      {"to",0,1,0,T_TO},
      {"trames"         ,1,_FRAMES , _INT_PLOT ,T_NUMBER},
      {"trapeze"         ,1, _TRAPEZE, _INT_SOLVER,T_NUMBER},
      {"trapezoid"         ,1, _TRAPEZE, _INT_SOLVER,T_NUMBER},
      {"triangle_point"         ,1, _POINT_TRIANGLE , _INT_COLOR ,T_NUMBER},
      {"trig"         ,1,_TRIG , _INT_MAPLECONVERSION ,T_NUMBER},
      {"true",1,1,_INT_BOOLEAN,T_NUMBER},
      {"try",0,0,0,T_TRY},
      {"try_catch",0,0,0,T_TRY_CATCH},
      {"tstep"         ,1, _TSTEP , _INT_PLOT ,T_NUMBER},
      {"unfactored"         ,1, _UNFACTORED, _INT_SOLVER,T_NUMBER},
      {"union",0,0,0,T_UNION},
      {"until",0,0,0,T_UNTIL},
      {"ustep"         ,1, _USTEP , _INT_PLOT ,T_NUMBER},
      {"view"         ,1, _VIEW, _INT_PLOT ,T_NUMBER},
      {"vrai",1,1,_INT_BOOLEAN,T_NUMBER},
      {"vstep"         ,1, _VSTEP , _INT_PLOT ,T_NUMBER},
      {"with_cocoa"         ,1,_WITH_COCOA , _INT_GROEBNER ,T_NUMBER},
      {"with_f5"         ,1,_WITH_F5 , _INT_GROEBNER ,T_NUMBER},
      {"xstep"         ,1, _XSTEP , _INT_PLOT ,T_NUMBER},
      {"xtickmarks"         ,1,_XTICKMARKS , _INT_PLOT ,T_NUMBER},
      {"ystep"         ,1, _YSTEP , _INT_PLOT ,T_NUMBER},
      {"zstep"         ,1, _ZSTEP , _INT_PLOT ,T_NUMBER},
      {"αστροειδές_σημείο"         ,1, _POINT_ETOILE , _INT_COLOR ,T_NUMBER},
      {"αόρατο_σημείο"         ,1, _POINT_INVISIBLE , _INT_COLOR ,T_NUMBER},
      {"γραμμή_διακεκομμένη"         ,1, _DASH_LINE, _INT_COLOR ,T_NUMBER},
      {"γραμμή_επίπεδο_καβούκι"         ,1, _CAP_FLAT_LINE, _INT_COLOR ,T_NUMBER},
      {"γραμμή_παύλα_τελεία"         ,1, _DASHDOT_LINE, _INT_COLOR ,T_NUMBER},
      {"γραμμή_παύλα_τελείατελεία"         ,1, _DASHDOTDOT_LINE, _INT_COLOR ,T_NUMBER},
      {"γραμμή_στρογγυλό_καβούκι"         ,1, _CAP_ROUND_LINE, _INT_COLOR ,T_NUMBER},
      {"γραμμή_συμπαγής"         ,1, 0, _INT_COLOR ,T_NUMBER},
      {"γραμμή_τετράγωνο_καβούκι"         ,1, _CAP_SQUARE_LINE, _INT_COLOR ,T_NUMBER},
      {"εύρος_γραμμής_1"         ,1, 0 , _INT_COLOR ,T_NUMBER},
      {"εύρος_γραμμής_2"         ,1, _LINE_WIDTH_2 , _INT_COLOR ,T_NUMBER},
      {"εύρος_γραμμής_3"         ,1, _LINE_WIDTH_3 , _INT_COLOR ,T_NUMBER},
      {"εύρος_γραμμής_4"         ,1, _LINE_WIDTH_4 , _INT_COLOR ,T_NUMBER},
      {"εύρος_γραμμής_5"         ,1, _LINE_WIDTH_5 , _INT_COLOR ,T_NUMBER},
      {"εύρος_γραμμής_6"         ,1, _LINE_WIDTH_6 , _INT_COLOR ,T_NUMBER},
      {"εύρος_γραμμής_7"         ,1, _LINE_WIDTH_7 , _INT_COLOR ,T_NUMBER},
      {"εύρος_γραμμής_8"         ,1, _LINE_WIDTH_8 , _INT_COLOR ,T_NUMBER},
      {"εύρος_σημείου_1"         ,1, 0 , _INT_COLOR ,T_NUMBER},
      {"εύρος_σημείου_2"         ,1, _POINT_WIDTH_2 , _INT_COLOR ,T_NUMBER},
      {"εύρος_σημείου_3"         ,1, _POINT_WIDTH_3 , _INT_COLOR ,T_NUMBER},
      {"εύρος_σημείου_4"         ,1, _POINT_WIDTH_4 , _INT_COLOR ,T_NUMBER},
      {"εύρος_σημείου_5"         ,1, _POINT_WIDTH_5 , _INT_COLOR ,T_NUMBER},
      {"εύρος_σημείου_6"         ,1, _POINT_WIDTH_6 , _INT_COLOR ,T_NUMBER},
      {"εύρος_σημείου_7"         ,1, _POINT_WIDTH_7 , _INT_COLOR ,T_NUMBER},
      {"εύρος_σημείου_8"         ,1, _POINT_WIDTH_8 , _INT_COLOR ,T_NUMBER},
      {"παύλα_τελεία"         ,1, _DOT_LINE, _INT_COLOR ,T_NUMBER},
      {"ρομβοειδές_σημείο"         ,1, _POINT_LOSANGE , _INT_COLOR ,T_NUMBER},
      {"σταυροειδές_σημείο"         ,1, _POINT_PLUS , _INT_COLOR ,T_NUMBER},
      {"τετραγωνικό_σημείο"         ,1, _POINT_CARRE  , _INT_COLOR ,T_NUMBER},
      {"τριγωνικό_σημείο"         ,1, _POINT_TRIANGLE , _INT_COLOR ,T_NUMBER},
      {"χιαστό_σημείο"         ,1, 0  , _INT_COLOR ,T_NUMBER}
