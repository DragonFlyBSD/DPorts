# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: net/rubygem-amazon-ec2/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	amazon-ec2
PORTVERSION=	0.9.17
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Library for accessing the Amazon Web Services APIs

RUN_DEPENDS=	rubygem-xml-simple>=1.0.12:${PORTSDIR}/textproc/rubygem-xml-simple

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/awshell bin/ec2-gem-example.rb bin/ec2-gem-profile.rb bin/ec2sh bin/setup.rb

NO_STAGE=	yes
.include <bsd.port.mk>
