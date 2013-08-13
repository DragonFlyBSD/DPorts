# Created by: vanilla
# $FreeBSD: mail/p5-Mail-Procmail/Makefile 324174 2013-08-02 18:52:07Z mat $

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

USES=		perl5
USE_PERL5=	configure

MAN3=		Mail::Procmail.3

.include <bsd.port.mk>
