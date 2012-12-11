# New ports collection makefile for:	MailStats
# Date created:				Wed Jan  3 15:09:46 2001
# Whom:					will
#
# $FreeBSD: ports/mail/p5-Mail-MailStats/Makefile,v 1.12 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	MailStats
PORTVERSION=	0.02
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	chifeng@gmail.com
COMMENT=	Perl module to detect newer messages in procmail-generated mailboxes

BUILD_DEPENDS=	p5-AppConfig>=0:${PORTSDIR}/devel/p5-AppConfig
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Mail::Stats::Record.3 Mail::Stats.3

.include <bsd.port.mk>
