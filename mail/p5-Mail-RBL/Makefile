# New ports collection makefile for:	p5-Mail-RBL
# Date created:				July 24th 2002
# Whom:	      				Erwin Lansing <erwin@FreeBSD.org>
#
# $FreeBSD: ports/mail/p5-Mail-RBL/Makefile,v 1.15 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	Mail-RBL
PORTVERSION=	1.10
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to access RBL-style host verification services

BUILD_DEPENDS=	p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS \
		p5-NetAddr-IP>0:${PORTSDIR}/net-mgmt/p5-NetAddr-IP
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Mail::RBL.3

FILES=		Makefile.PL RBL.pm

.include <bsd.port.mk>
