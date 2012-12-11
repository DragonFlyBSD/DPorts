# New ports collection makefile for:	p5-Asterisk
# Date created:				11 October 2004
# Whom:					Alexander Timoshenko <gonzo@univ.kiev.ua>
#
# $FreeBSD: ports/misc/p5-Asterisk/Makefile,v 1.11 2012/11/17 05:59:42 svnexp Exp $
#

PORTNAME=	Asterisk
PORTVERSION=	1.03
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JAMESGOL
PKGNAMEPREFIX=	p5-
DISTNAME=	asterisk-perl-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Asterisk perl library

PERL_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/asterisk-perl-${PORTVERSION}

MAN3=		Asterisk::AGI.3 \
		Asterisk::Manager.3 \
		Asterisk::Outgoing.3 \
		Asterisk::Voicemail.3

.include <bsd.port.mk>
