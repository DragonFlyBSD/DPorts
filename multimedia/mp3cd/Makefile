# New ports collection makefile for:	mp3cd
# Date created:		2009-06-15
# Whom:			Sylvio Cesar <sylvio@FreeBSD.org>
#
# $FreeBSD: ports/multimedia/mp3cd/Makefile,v 1.8 2012/11/17 05:59:51 svnexp Exp $
#

PORTNAME=	mp3cd
PORTVERSION=	1.027
PORTEPOCH=	1
CATEGORIES=	multimedia
MASTER_SITES=	http://outflux.net/software/pkgs/mp3cd/download/

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Perl script that burns MP3 to audio CDs

BUILD_DEPENDS=	p5-Config-Simple>=0:${PORTSDIR}/devel/p5-Config-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	yes
PERL_CONFIGURE=	yes

MAN1=	mp3cd.1
MANCOMPRESS=	yes

.include <bsd.port.mk>
