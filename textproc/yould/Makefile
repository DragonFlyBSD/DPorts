# New ports collection makefile for:	yould
# Date created:		23 June 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/textproc/yould/Makefile,v 1.5 2012/11/17 06:02:26 svnexp Exp $
#

PORTNAME=	yould
PORTVERSION=	0.3.7
CATEGORIES=	textproc
MASTER_SITES=	CHEESESHOP/source/y/${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Pronounceable word generator

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYDISTUTILS_INSTALLARGS=-Z -O 1 -N -S ${PYTHON_SITELIBDIR} ${WRKSRC}/dist/${PYEASYINSTALL_EGG}
PORTDOCS=	NEWS.txt README.txt

.ifndef NOPORTDOCS
post-install:
	@${INSTALL} -d ${DOCSDIR}/
	@cd ${WRKSRC}/&&${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
