# Created by: vanilla
# $FreeBSD: graphics/p5-GD-Barcode/Makefile 332801 2013-11-05 01:33:02Z vanilla $

PORTNAME=	GD-Barcode
PORTVERSION=	1.15
PORTREVISION=	5
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GD::Barcode - Create barcode image with GD

BUILD_DEPENDS=	p5-GD>=0:${PORTSDIR}/graphics/p5-GD
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
