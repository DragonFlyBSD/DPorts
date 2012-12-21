# New ports collection makefile for:	p5-Net-FTP-Recursive
# Date Created:				11 April, 2005
# Whom:					Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/ftp/p5-Net-FTP-Recursive/Makefile,v 1.6 2012/11/17 05:57:30 svnexp Exp $
#

PORTNAME=	Net-FTP-Recursive
PORTVERSION=	2.04
CATEGORIES=	ftp perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl module to provide recursive FTP client class

BUILD_DEPENDS=	p5-Net>=0:${PORTSDIR}/net/p5-Net
RUN_DEPENDS=	p5-Net>=0:${PORTSDIR}/net/p5-Net

WRKSRC=		${WRKDIR}/${PORTNAME}

PERL_CONFIGURE=	yes

MAN3=		Net::FTP::Recursive.3

.include <bsd.port.mk>
