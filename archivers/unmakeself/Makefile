# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: archivers/unmakeself/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	unmakeself
PORTVERSION=	1.1
CATEGORIES=	archivers
DISTFILES=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Extract Makeself archives

LDFLAGS+=	-larchive -lbz2 -lz -lcrypto -lmd
NO_WRKSUBDIR=	yes

PLIST_FILES=	bin/unmakeself

do-configure:
	@${RM} -f ${WRKSRC}/config.h
	@if ${GREP} -q memmem /usr/include/string.h; then \
		${ECHO_CMD} "#define HAS_MEMMEM" > ${WRKSRC}/config.h; \
	else \
		${ECHO_CMD} "#undef HAS_MEMMEM" > ${WRKSRC}/config.h; \
	fi

do-build:
	${CC} ${CFLAGS} ${CPPFLAGS} -I${WRKSRC} -o ${WRKSRC}/unmakeself \
		${FILESDIR}/unmakeself.c ${LDFLAGS}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/unmakeself ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>
