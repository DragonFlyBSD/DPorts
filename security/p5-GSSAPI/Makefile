# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: security/p5-GSSAPI/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	GSSAPI
PORTVERSION=	0.28
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	LWP/AGROLMS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension providing access to the GSSAPIv2 library

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 800000
BROKEN=		Does not work on FreeBSD 7.x
.endif

.include <bsd.port.post.mk>
