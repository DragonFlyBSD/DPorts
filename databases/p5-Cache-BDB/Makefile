# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: databases/p5-Cache-BDB/Makefile 341762 2014-01-29 17:18:46Z az $

PORTNAME=	Cache-BDB
PORTVERSION=	0.04
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Object caching wrapper around BerkeleyDB

BUILD_DEPENDS=	p5-BerkeleyDB>=0:${PORTSDIR}/databases/p5-BerkeleyDB
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
