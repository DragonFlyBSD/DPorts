# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-Scalar-Defer/Makefile 327724 2013-09-20 17:13:42Z bapt $

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

USES=		perl5
USE_PERL5=	configure

MAN3=		Scalar::Defer.3

NO_STAGE=	yes
.include <bsd.port.mk>
