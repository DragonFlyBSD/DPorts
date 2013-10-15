# $FreeBSD: sysutils/rubygem-fluent-mixin-plaintextformatter/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	fluent-mixin-plaintextformatter
PORTVERSION=	0.2.2
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Fluentd plugin to include format values into json, tsv or csv

RUN_DEPENDS=	\
	rubygem-fluentd>0:${PORTSDIR}/sysutils/rubygem-fluentd \
	rubygem-ltsv>0:${PORTSDIR}/textproc/rubygem-ltsv

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
