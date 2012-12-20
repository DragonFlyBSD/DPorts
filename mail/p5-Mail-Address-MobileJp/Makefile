# New ports collection makefile for:	p5-Mail-Address-MobileJp
# Date created:				2004/08/04
# Whom:					nork@FreeBSD.org
#
# $FreeBSD: ports/mail/p5-Mail-Address-MobileJp/Makefile,v 1.11 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	Mail-Address-MobileJp
PORTVERSION=	0.09
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	An utility to detect an e-mail is mobile one or not

BUILD_DEPENDS=	p5-Mail-Tools>=0:${PORTSDIR}/mail/p5-Mail-Tools
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Mail::Address::MobileJp.3

.include <bsd.port.mk>
