# New ports collection makefile for:	p5-Mail-Procmail
# Date Created:				13 Oct 2003
# Whom:					vanilla
#
# $FreeBSD: ports/mail/p5-Mail-Procmail/Makefile,v 1.4 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	Mail-Procmail
PORTVERSION=	1.08
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module provides procmail-like tools

RUN_DEPENDS= 	p5-LockFile-Simple>=0:${PORTSDIR}/devel/p5-LockFile-Simple \
		p5-Mail-Tools>=0:${PORTSDIR}/mail/p5-Mail-Tools

PERL_CONFIGURE=	yes

MAN3=		Mail::Procmail.3

.include <bsd.port.mk>
