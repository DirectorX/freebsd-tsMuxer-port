PORTNAME=	tsmuxer
PORTVERSION=	2.7.0
CATEGORIES=	multimedia

MAINTAINER=	directorx-freebsd@proton.me
COMMENT=	Utility to create TS and M2TS files for IP broadcasting
WWW=		https://github.com/justdan96/tsMuxer

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	justdan96
GH_PROJECT=	tsMuxer

USES=	cmake qt:5
CMAKE_ARGS+=	-DTSMUXER_GUI=ON -DCMAKE_INSTALL_DATADIR=/usr/local/share/
USE_QT=	core gui widgets \
		declarative multimedia linguisttools:build
QT5MODULES=	Core Gui Multimedia Declarative MultimediaWidgets \
		Widgets

.include <bsd.port.mk>
