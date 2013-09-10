# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: www/p5-Any-URI-Escape/Makefile 325974 2013-09-02 11:04:10Z az $

PORTNAME=	Any-URI-Escape
PORTVERSION=	0.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Load URI::Escape::XS preferentially over URI::Escape

RUN_DEPENDS:=	p5-URI-Escape-XS>=0:${PORTSDIR}/www/p5-URI-Escape-XS

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

MAN3=	Any::URI::Escape.3

.include <bsd.port.mk>
