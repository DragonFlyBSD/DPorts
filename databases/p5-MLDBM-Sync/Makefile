# Created by: erwin@FreeBSD.org
# $FreeBSD: databases/p5-MLDBM-Sync/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	MLDBM-Sync
PORTVERSION=	0.30
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	MLDBM::Sync - safe concurrent access to MLDBM databases

BUILD_DEPENDS=	p5-MLDBM>=0:${PORTSDIR}/databases/p5-MLDBM
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		MLDBM::Sync.3

.include <bsd.port.mk>
