# Created by: ache@freebsd.org
# $FreeBSD: databases/p5-MLDBM/Makefile 324174 2013-08-02 18:52:07Z mat $

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

.include <bsd.port.mk>
