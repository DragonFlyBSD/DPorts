# Created by: ache@FreeBSD.org
# $FreeBSD: databases/p5-MLDBM/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	MLDBM
PORTVERSION=	2.05
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Store multi-level hash structure in single level tied hash

BUILD_DEPENDS=	p5-FreezeThaw>=0:${PORTSDIR}/devel/p5-FreezeThaw
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		MLDBM.3

NO_STAGE=	yes
.include <bsd.port.mk>
