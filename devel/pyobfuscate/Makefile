# Created by: ijliao
# $FreeBSD: devel/pyobfuscate/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s,'/usr/bin','${PREFIX}/bin'," ${WRKSRC}/setup.py

.include <bsd.port.mk>
