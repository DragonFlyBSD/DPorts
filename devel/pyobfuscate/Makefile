# ex:ts=8
# Ports collection makefile for:	pyobfuscate
# Date created:			May 4, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/devel/pyobfuscate/Makefile,v 1.7 2012/11/17 05:56:54 svnexp Exp $
#

PORTNAME=	pyobfuscate
PORTVERSION=	0.3
CATEGORIES=	devel
MASTER_SITES=	http://www.lysator.liu.se/~astrand/projects/pyobfuscate/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	arved

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python source code obfuscator

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	bin/pyobfuscate

post-patch:
	@${REINPLACE_CMD} -e "s,'/usr/bin','${PREFIX}/bin'," ${WRKSRC}/setup.py

.include <bsd.port.mk>
