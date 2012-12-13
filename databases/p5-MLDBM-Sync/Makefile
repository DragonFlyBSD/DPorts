# New ports collection makefile for:    p5-MLDBM-Sync
# Date created:                         May 29th, 2002
# Whom:                                 erwin@FreeBSD.org
#
# $FreeBSD: ports/databases/p5-MLDBM-Sync/Makefile,v 1.13 2012/11/17 05:55:16 svnexp Exp $
#

PORTNAME=	MLDBM-Sync
PORTVERSION=	0.30
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	MLDBM::Sync - safe concurrent access to MLDBM databases

BUILD_DEPENDS=	p5-MLDBM>=0:${PORTSDIR}/databases/p5-MLDBM
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		MLDBM::Sync.3

.include <bsd.port.mk>
