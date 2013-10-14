# Created by: Ilia Chipitsine <ilia@jane.cgu.chel.su>
# $FreeBSD: converters/p5-Unicode-Map8/Makefile 327715 2013-09-20 16:05:24Z bapt $

PORTNAME=	Unicode-Map8
PORTVERSION=	0.13
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Mapping table between 8-bit chars and Unicode

BUILD_DEPENDS=	p5-Unicode-String>=2:${PORTSDIR}/converters/p5-Unicode-String
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN1=		umap.1
MAN3=		Unicode::Map8.3

NO_STAGE=	yes
.include <bsd.port.mk>
