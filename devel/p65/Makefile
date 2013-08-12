# Created by: ijliao
# $FreeBSD: devel/p65/Makefile 324181 2013-08-03 08:45:51Z az $

PORTNAME=	p65
PORTVERSION=	1.1
CATEGORIES=	devel
MASTER_SITES=	https://hkn.eecs.berkeley.edu/~mcmartin/P65/pl/
EXTRACT_SUFX=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An assembler for the 6502 microprocessor

EXTRACT_CMD=	${CP}
EXTRACT_BEFORE_ARGS=	# empty
EXTRACT_AFTER_ARGS=	${WRKSRC}
USES=		perl5
USE_DOS2UNIX=	yes
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
PLIST_FILES=	bin/p65

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME} ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
