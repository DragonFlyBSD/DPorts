# Created by: kftseng@iyard.org
# $FreeBSD: security/p5-Crypt-OpenSSL-X509/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt-OpenSSL-X509
PORTVERSION=	1.8.2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}00.${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for OpenSSL X509 API

USES=		perl5
USE_PERL5=	configure

MAN3=		Crypt::OpenSSL::X509.3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e '/^cc_optimize_flags/ s| -Werror||' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
