# New ports collection makefile for:	p5-Mail-CheckUser
# Date created:				2 January 2004
# Whom:					Attila Nagy <bra@fsn.hu>
#
# $FreeBSD: ports/mail/p5-Mail-CheckUser/Makefile,v 1.8 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	Mail-CheckUser
PORTVERSION=	1.21
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bra@fsn.hu
COMMENT=	Perl module to check email addresses for validity

BUILD_DEPENDS=  p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		cufilter.1
MAN3=           Mail::CheckUser.3

.include <bsd.port.mk>
