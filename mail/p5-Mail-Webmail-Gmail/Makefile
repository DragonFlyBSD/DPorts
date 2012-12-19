# New ports collection makefile for:	Mail-Webmail-Gmail
# Date created:				Jul 25 2004
# Whom:					Cheng-Lung Sung <clsung@dragon2.net>
#
# $FreeBSD: ports/mail/p5-Mail-Webmail-Gmail/Makefile,v 1.20 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	Mail-Webmail-Gmail
PORTVERSION=	1.09
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to Google webmail service

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Crypt-SSLeay>=0:${PORTSDIR}/security/p5-Crypt-SSLeay
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Mail::Webmail::Gmail.3

.include <bsd.port.mk>
