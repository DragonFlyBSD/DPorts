
PORTNAME=	elftoolchain
PORTVERSION=	0.7.1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/Sources/${PORTNAME}-${PORTVERSION}

MAINTAINER=	zrj@efnet.irc
COMMENT=	Partial replacement utilities of binutils (missing as(1))

LICENSE=	BSD3CLAUSE

USES=		tar:bz2

CFLAGS+=	-Wno-error=implicit-fallthrough -Wno-error=shift-negative-value

MAKE_ARGS=	WITH_TESTS="no" NOPIC=yes NOPROFILE=yes
MAKE_ARGS+=	BINDIR=${LOCALBASE}/bin MANDIR=${LOCALBASE}/man/man
MAKE_ARGS+=	INCSDIR=${LOCALBASE}/include LIBDIR=${LOCALBASE}/lib

MAKE_JOBS_UNSAFE= yes

# prevent conflicts with binutils, same as devel/elfutls (use "et-" as a prefix)
post-patch:
	${REINPLACE_CMD} -e '/documentation/s@SUBDIR@#&@g' \
		${WRKSRC}/Makefile
	${MV} ${WRKSRC}/addr2line/addr2line.1 ${WRKSRC}/addr2line/et-addr2line.1
	${MV} ${WRKSRC}/ar/ar.1 ${WRKSRC}/ar/et-ar.1
	${MV} ${WRKSRC}/ar/ranlib.1 ${WRKSRC}/ar/et-ranlib.1
	${MV} ${WRKSRC}/brandelf/brandelf.1 ${WRKSRC}/brandelf/et-brandelf.1
	${MV} ${WRKSRC}/cxxfilt/c++filt.1 ${WRKSRC}/cxxfilt/et-c++filt.1
	${MV} ${WRKSRC}/elfcopy/elfcopy.1 ${WRKSRC}/elfcopy/et-elfcopy.1
	${MV} ${WRKSRC}/elfcopy/strip.1 ${WRKSRC}/elfcopy/et-strip.1
	${MV} ${WRKSRC}/elfcopy/mcs.1 ${WRKSRC}/elfcopy/et-mcs.1
	${MV} ${WRKSRC}/elfdump/elfdump.1 ${WRKSRC}/elfdump/et-elfdump.1
	${MV} ${WRKSRC}/findtextrel/findtextrel.1 ${WRKSRC}/findtextrel/et-findtextrel.1
	${MV} ${WRKSRC}/ld/ld.1 ${WRKSRC}/ld/et-ld.1
	${MV} ${WRKSRC}/nm/nm.1 ${WRKSRC}/nm/et-nm.1
	${MV} ${WRKSRC}/readelf/readelf.1 ${WRKSRC}/readelf/et-readelf.1
	${MV} ${WRKSRC}/size/size.1 ${WRKSRC}/size/et-size.1
	${MV} ${WRKSRC}/strings/strings.1 ${WRKSRC}/strings/et-strings.1
	${REINPLACE_CMD} -e 's@Dt ADDR2LINE@Dt ET-ADDR2LINE@g' -e 's@Nm addr2line@Nm et-addr2line@g' \
		${WRKSRC}/addr2line/et-addr2line.1
	${REINPLACE_CMD} -e 's@Dt AR@Dt ET-AR@g' -e 's@Nm ar@Nm et-ar@g' \
		${WRKSRC}/ar/et-ar.1
	${REINPLACE_CMD} -e 's@Dt RANLIB@Dt ET-RANLIB@g' -e 's@Nm ranlib@Nm et-ranlib@g' \
		${WRKSRC}/ar/et-ranlib.1
	${REINPLACE_CMD} -e 's@Dt BRANDELF@Dt ET-BRANDELF@g' -e 's@Nm brandelf@Nm et-brandelf@g' \
		${WRKSRC}/brandelf/et-brandelf.1
	${REINPLACE_CMD} -e 's@Dt C++FILT@Dt ET-C++FILT@g' -e 's@Nm c++filt@Nm et-c++filt@g' \
		${WRKSRC}/cxxfilt/et-c++filt.1
	${REINPLACE_CMD} -e 's@Dt ELFCOPY@Dt ET-ELFCOPY@g' -e 's@Nm elfcopy@Nm et-elfcopy@g' \
		${WRKSRC}/elfcopy/et-elfcopy.1
	${REINPLACE_CMD} -e 's@Dt MCS@Dt ET-MCS@g' -e 's@Nm mcs@Nm et-mcs@g' \
		${WRKSRC}/elfcopy/et-mcs.1
	${REINPLACE_CMD} -e 's@Dt STRIP@Dt ET-STRIP@g' -e 's@Nm strip@Nm et-strip@g' \
		${WRKSRC}/elfcopy/et-strip.1
	${REINPLACE_CMD} -e 's@Dt ELFDUMP@Dt ET-ELFDUMP@g' -e 's@Nm elfdump@Nm et-elfdump@g' \
		${WRKSRC}/elfdump/et-elfdump.1
	${REINPLACE_CMD} -e 's@Dt FINDTEXTREL@Dt ET-FINDTEXTREL@g' -e 's@Nm findtextrel@Nm et-findtextrel@g' \
		${WRKSRC}/findtextrel/et-findtextrel.1
	${REINPLACE_CMD} -e 's@Dt LD@Dt ET-LD@g' -e 's@Nm ld@Nm et-ld@g' \
		${WRKSRC}/ld/et-ld.1
	${REINPLACE_CMD} -e 's@Dt NM@Dt ET-NM@g' -e 's@Nm nm@Nm et-nm@g' \
		${WRKSRC}/nm/et-nm.1
	${REINPLACE_CMD} -e 's@Dt RREADELF@Dt ET-READELF@g' -e 's@Nm readelf@Nm et-readelf@g' \
		${WRKSRC}/readelf/et-readelf.1
	${REINPLACE_CMD} -e 's@Dt SIZE@Dt ET-SIZE@g' -e 's@Nm size@Nm et-size@g' \
		${WRKSRC}/size/et-size.1
	${REINPLACE_CMD} -e 's@Dt STRINGS@Dt ET-STRINGS@g' -e 's@Nm strings@Nm et-strings@g' \
		${WRKSRC}/strings/et-strings.1
	${REINPLACE_CMD} -e '/PROG=/s@addr2line@et-&@g' -e '/MAN1=/s@addr2line@et-&@g' \
		${WRKSRC}/addr2line/Makefile
	${REINPLACE_CMD} -e 's@ar.5@@g' -e '/PROG=/s@ar@et-&@g' -e '/MAN=/s@ar@et-&@g' \
			 -e '/MAN=/s@ranlib@et-&@g' -e '/EXTRA_TARGETS/s@ranlib@et-&@g' \
			 -e '/\/ar/s@ranlib@et-&@' -e '/\/ar/s@ar@et-&@' \
		${WRKSRC}/ar/Makefile
	${REINPLACE_CMD} -e '/PROG=/s@brandelf@et-&@g' -e '/MAN1=/s@brandelf@et-&@g' \
		${WRKSRC}/brandelf/Makefile
	${LN} -sv brandelf.c ${WRKSRC}/brandelf/et-brandelf.c
	${REINPLACE_CMD} -e '/PROG=/s@c++filt@et-&@g' -e '/MAN1=/s@c++filt@et-&@g' \
		${WRKSRC}/cxxfilt/Makefile
	${REINPLACE_CMD} -e '/PROG=/s@elfcopy@et-&@g' -e '/MAN/s@elfcopy@et-&@g' \
			 -e '/EXTRA_TARGETS=/s@mcs@et-&@g' -e '/EXTRA_TARGETS=/s@strip@et-&@g' \
			 -e '/MAN/s@mcs@et-&@g' -e '/MAN/s@strip@et-&@g' \
			 -e '/\/elfcopy/s@strip@et-&@' -e '/\/elfcopy/s@mcs@et-&@' -e '/\/elfcopy/s@elfcopy@et-&@' \
		${WRKSRC}/elfcopy/Makefile
	${REINPLACE_CMD} -e '/progname/s@"elfcopy"@"et-elfcopy"@g' -e '/progname/s@"strip"@"et-strip"@g' \
			 -e '/progname/s@"mcs"@"et-mcs"@g' \
		${WRKSRC}/elfcopy/main.c
	${REINPLACE_CMD} -e '/PROG=/s@elfdump@et-&@g' -e '/MAN1=/s@elfdumpf@et-&@g' \
		${WRKSRC}/elfdump/Makefile
	${LN} -sv elfdump.c ${WRKSRC}/elfdump/et-elfdump.c
	${REINPLACE_CMD} -e '/PROG=/s@findtextrel@et-&@g' -e '/MAN1=/s@findtextrel@et-&@g' \
		${WRKSRC}/findtextrel/Makefile
	${REINPLACE_CMD} -e '/PROG=/s@ld@et-&@g' -e '/MAN1=/s@ld@et-&@g' \
		${WRKSRC}/ld/Makefile
	${REINPLACE_CMD} -e '/PROG=/s@nm@et-&@g' -e '/MAN1=/s@nm@et-&@g' \
		${WRKSRC}/nm/Makefile
	${REINPLACE_CMD} -e '/PROG=/s@readelf@et-&@g' -e '/MAN1=/s@readelf@et-&@g' \
		${WRKSRC}/readelf/Makefile
	${REINPLACE_CMD} -e '/PROG=/s@size@et-&@g' -e '/MAN1=/s@size@et-&@g' \
		${WRKSRC}/size/Makefile
	${LN} -sv size.c ${WRKSRC}/size/et-size.c
	${REINPLACE_CMD} -e '/PROG=/s@strings@et-&@g' -e '/MAN1=/s@strings@et-&@g' \
		${WRKSRC}/strings/Makefile
	${LN} -sv strings.c ${WRKSRC}/strings/et-strings.c

post-install:
	${RM} -rf ${STAGEDIR}${PREFIX}/include
	${RM} -rf ${STAGEDIR}${PREFIX}/lib
	${RM} -rf ${STAGEDIR}${PREFIX}/man/man3
	${RM} -rf ${STAGEDIR}${PREFIX}/man/man5

.include <bsd.port.mk>
