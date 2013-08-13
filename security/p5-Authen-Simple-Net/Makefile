# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: security/p5-Authen-Simple-Net/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Authen-Simple-Net
PORTVERSION=	0.2
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple authentication via FTP, POP3, or SMTP

BUILD_DEPENDS=	p5-Authen-Simple>=0:${PORTSDIR}/security/p5-Authen-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Authen::Simple::FTP.3 Authen::Simple::POP3.3 Authen::Simple::SMTP.3

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
