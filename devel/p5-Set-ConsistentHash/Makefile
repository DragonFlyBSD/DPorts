# New ports collection makefile for:	p5-Set-ConsistentHash
# Date created:		2008-01-12
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-Set-ConsistentHash/Makefile,v 1.5 2012/11/17 05:56:29 svnexp Exp $
#

PORTNAME=	Set-ConsistentHash
PORTVERSION=	0.92
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Set
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Library for doing consistent hashing

BUILD_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Set::ConsistentHash.3

.include <bsd.port.mk>
