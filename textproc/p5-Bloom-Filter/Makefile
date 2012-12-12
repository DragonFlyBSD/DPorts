# New ports collection makefile for: 	p5-Bloom-Filter
# Date created: 		     	August 06, 2004
# Whom:					Aaron Straup Cope <ascope@cpan.org>
#
# $FreeBSD: ports/textproc/p5-Bloom-Filter/Makefile,v 1.8 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	Bloom-Filter
PORTVERSION=	1.0
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MCEGLOWS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A probabilistic algorithm for doing existence tests

BUILD_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Bloom::Filter.3

.include <bsd.port.mk>
