# New ports collection makefile for:	devel/p5-ZML
# Date created:		2008-05-12
# Whom:			Zane C, Bowers <vvelox@vvelox.net>
#
# $FreeBSD: ports/devel/p5-ZML/Makefile,v 1.9 2012/11/17 05:56:36 svnexp Exp $
#

PORTNAME=	ZML
PORTVERSION=	1.0.0
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VVELOX
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	A simple, fast, and easy to read binary data storage format

BUILD_DEPENDS=	p5-Error-Helper>=0:${PORTSDIR}/devel/p5-Error-Helper
RUN_DEPENDS=	p5-Error-Helper>=0:${PORTSDIR}/devel/p5-Error-Helper

PERL_CONFIGURE=	yes

MAN3=		ZML.3

.include <bsd.port.mk>
