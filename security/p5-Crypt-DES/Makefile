# New ports collection makefile for:	p5-Crypt-DES
# Date created:				October 20th 1996
# Whom:	      				James FitzGibbon <jfitz@FreeBSD.org>
#
# $FreeBSD: ports/security/p5-Crypt-DES/Makefile,v 1.29 2012/11/17 06:01:10 svnexp Exp $
#

PORTNAME=	Crypt-DES
PORTVERSION=	2.05
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to DES block cipher

BUILD_DEPENDS=	p5-Crypt-CBC>=0:${PORTSDIR}/security/p5-Crypt-CBC
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Crypt::DES.3

.include <bsd.port.mk>
