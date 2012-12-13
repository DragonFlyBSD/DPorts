# New ports collection Makefile for:	p5-Crypt-Lite
# Date created:				18 Dec 2006
# Whom:	      				Gabor Kovesdan
# $FreeBSD: ports/security/p5-Crypt-Lite/Makefile,v 1.10 2012/11/17 06:01:11 svnexp Exp $

PORTNAME=	Crypt-Lite
PORTVERSION=	0.82.11
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Perl extension for a symmetric data encryption and decryption

BUILD_DEPENDS=	p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Crypt::Lite.3

.include <bsd.port.mk>
