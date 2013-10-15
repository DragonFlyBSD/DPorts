# Created by: ijliao
# $FreeBSD: textproc/csv2latex/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	csv2latex
PORTVERSION=	0.18
PORTEPOCH=	1
CATEGORIES=	textproc converters
MASTER_SITES=	http://ftp.debian.org/pool/main/c/csv2latex/
DISTNAME=	${PORTNAME}_${PORTVERSION}.orig

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Converts a well formed csv file to a LaTeX document

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
PLIST_FILES=	bin/csv2latex

NO_STAGE=	yes
do-build:
	${CC} ${CFLAGS} -o ${WRKSRC}/${PORTNAME} ${WRKSRC}/${PORTNAME}.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.if ( defined(WITH_MAN) &&  !defined(NO_INSTALL_MANPAGES) )
BUILD_DEPENDS +=	docbook-to-man:${PORTSDIR}/textproc/docbook-to-man
MAN1=	${PORTNAME}.1

post-build:
	docbook-to-man ${WRKSRC}/${PORTNAME}.sgml > ${WRKSRC}/${MAN1}

post-install:
	${INSTALL_MAN} ${WRKSRC}/${MAN1} ${MAN1PREFIX}/man/man1

.endif

.include <bsd.port.mk>
