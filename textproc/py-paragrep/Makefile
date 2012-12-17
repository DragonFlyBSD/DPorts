# Ports collection Makefile for:	py-paragrep
# Date created:				Mar 29, 2010
# Whom:					Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/textproc/py-paragrep/Makefile,v 1.3 2012/11/17 06:02:17 svnexp Exp $
#

PORTNAME=	paragrep
PORTVERSION=	3.0.5
CATEGORIES=	textproc python
MASTER_SITES=	http://github.com/bmc/paragrep/zipball/release-3.0.5/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	bmc-${PORTNAME}-48708ef

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Paragraph Grep Utility

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}grizzled>=0.8.1:${PORTSDIR}/devel/py-grizzled
RUN_DEPENDS:=	${BUILD_DEPENDS}

FETCH_ARGS=
USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

MAN1=		paragrep.1

post-install:
	@${INSTALL_MAN} ${WRKSRC}/man/paragrep.1 ${PREFIX}/man/man1/

.include <bsd.port.mk>
