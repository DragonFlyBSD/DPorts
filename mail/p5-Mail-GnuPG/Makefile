# Created by: clsung@dragon2.net
# $FreeBSD: mail/p5-Mail-GnuPG/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Mail-GnuPG
PORTVERSION=	0.19
CATEGORIES=	mail security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to process and/or create PGP email

BUILD_DEPENDS=	p5-GnuPG-Interface>=0:${PORTSDIR}/security/p5-GnuPG-Interface \
		p5-MIME-Tools>=0:${PORTSDIR}/mail/p5-MIME-Tools \
		p5-Mail-Tools>=0:${PORTSDIR}/mail/p5-Mail-Tools
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Mail::GnuPG.3

.include <bsd.port.mk>
