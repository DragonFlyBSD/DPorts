# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: security/p5-Crypt-RandPasswd/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt-RandPasswd
PORTVERSION=	0.02
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	An implementation of the Automated Password Generator standard

USES=		perl5
USE_PERL5=	configure

MAN3=		Crypt::RandPasswd.3

NO_STAGE=	yes
post-patch:

	@${RM} ${WRKSRC}/lib/Crypt/RandPasswd.pm.orig

.include <bsd.port.mk>
