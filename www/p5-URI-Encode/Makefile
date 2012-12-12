# Created by: ports@c0decafe.net <ports@c0decafe.net>
# $FreeBSD: ports/www/p5-URI-Encode/Makefile,v 1.7 2012/11/19 14:42:09 svnexp Exp $

PORTNAME=	URI-Encode
PORTVERSION=	0.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MITHUN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Simple URI Encoding/Decoding

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PERL_CONFIGURE=	yes

MAN3=		URI::Encode.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501000
BUILD_DEPENDS+=	p5-version>=0:${PORTSDIR}/devel/p5-version
RUN_DEPENDS+=	p5-version>=0:${PORTSDIR}/devel/p5-version
.endif

.include <bsd.port.post.mk>
