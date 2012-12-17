# New ports collection makefile for:	p5-Scalar-Defer
# Date created:		2006-07-20
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-Scalar-Defer/Makefile,v 1.18 2012/11/17 05:56:28 svnexp Exp $
#

PORTNAME=	Scalar-Defer
PORTVERSION=	0.23
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Calculate values on demand

BUILD_DEPENDS=	p5-Class-InsideOut>=0:${PORTSDIR}/devel/p5-Class-InsideOut \
		p5-Exporter-Lite>=0:${PORTSDIR}/devel/p5-Exporter-Lite
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Scalar::Defer.3

.include <bsd.port.mk>
